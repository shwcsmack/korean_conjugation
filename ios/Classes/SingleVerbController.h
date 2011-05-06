//
//  SingleVerbController.h
//  Dongsa
//
//  Created by Max Christian on 02/05/2011.
//  Copyright 2011 Max Christian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SingleVerbController : UIViewController <UIWebViewDelegate> {
    NSString* infinitive;
    NSString* tenseDescription;
    UIWebView *webView;
    int linkCount;
}

@property (nonatomic, retain) NSString* infinitive;
@property (nonatomic, retain) NSString* tenseDescription;
@property (nonatomic, retain) IBOutlet UIWebView *webView;

@end