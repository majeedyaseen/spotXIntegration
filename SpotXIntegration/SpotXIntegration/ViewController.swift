//
//  ViewController.swift
//  SpotXIntegration
//
//  Created by Yaseen Majeed on 03/07/18.
//  Copyright © 2018 Yaseen Majeed. All rights reserved.
//

import UIKit
import SpotX

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    @IBAction func adClicked(_ sender:UIButton){
        self.playInterstialAd()
    }
    func playInterstialAd()  {
        let spotxInterstital = SpotXInterstitialAdPlayer.init()
        spotxInterstital.delegate = self
        SpotX.debugMode(true)
        spotxInterstital.load()
        
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
}
extension ViewController: SpotXAdPlayerDelegate {
    
    func request(for player: SpotXAdPlayer) -> SpotXAdRequest? {
        
        // if NOT using an apikey
        let request: SpotXAdRequest = SpotXAdRequest.init(apiKey: "apikey-1234")!
        
        // This SpotX channel id can be used for testing
        request.setChannel("85394")
        
        return request
        
    }
    // Play the ad(s) if they were returned
    public func spotx(_ player: SpotXAdPlayer, didLoadAds group: SpotXAdGroup?, error: Error?) {
        if (group != nil && group!.ads.count > 0) {
            player.start()
        }
        else {
            //            self.showMessage(message: "No Ads Available")
        }
    }
    
    // Called when the ad has started playing
    public func spotx(_ player: SpotXAdPlayer, adStart ad: SpotXAd) {
        print("SDK:Interstitial:adStart")
    }
    
    // Called when the group of ad(s) has started playing
    public func spotx(_ player: SpotXAdPlayer, adGroupStart group: SpotXAdGroup) {
        print("SDK:Interstitial:adGroupStart")
    }
    
    // Called every second during ad playback
    public func spotx(_ player: SpotXAdPlayer, adTimeUpdate ad: SpotXAd, timeElapsed seconds: Double) {
        print("SDK:Interstitial:adTimeUpdate")
    }
    
    // Called when the user has clicked the ad and has navigated to the click-through destination
    public func spotx(_ player: SpotXAdPlayer, adClicked ad: SpotXAd) {
        print("SDK:Interstitial:adClicked")
    }
    
    // Called when the ad has finished playing
    public func spotx(_ player: SpotXAdPlayer, adComplete ad: SpotXAd) {
        print("SDK:Interstitial:adComplete")
    }
    
    // Called when the user has skipped the ad
    public func spotx(_ player: SpotXAdPlayer, adSkipped ad: SpotXAd) {
        print("SDK:Interstitial:adSkipped")
    }
    
    // Called when an error happens during playback
    public func spotx(_ player: SpotXAdPlayer, adError ad: SpotXAd?, error: Error?) {
        print("SDK:Interstitial:adError")
    }
    
    // Called when the ad(s) have completed playback and have been closed
    public func spotx(_ player: SpotXAdPlayer, adGroupComplete group: SpotXAdGroup) {
        print("SDK:Interstitial:adGroupComplete")
    }
}

