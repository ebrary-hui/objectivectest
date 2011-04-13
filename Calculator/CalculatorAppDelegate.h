//
//  CalculatorAppDelegate.h
//  Calculator
//
//  Created by HUI CHEN on 4/13/11.
//  Copyright 2011 Ebrary. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalculatorViewController;

@interface CalculatorAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CalculatorViewController *viewController;

@end
