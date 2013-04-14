//
//  RoundedTableViewAppDelegate.m
//  RoundedTableView
//
//  Created by Jeremy Collins on 1/7/10.
//  Copyright Beetlebug Software, LLC 2010. All rights reserved.
//

#import "RoundedTableViewAppDelegate.h"
#import "MainViewController.h"

@implementation RoundedTableViewAppDelegate

@synthesize window;
@synthesize mainViewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	self.mainViewController = [[MainViewController alloc] initWithNibName:@"MainView" bundle:nil];
	
    //mainViewController.view.frame = [UIScreen mainScreen].applicationFrame;
	//[window addSubview:[mainViewController view]];
    self.window.rootViewController = self.mainViewController;
    [self.window makeKeyAndVisible];
    
    return YES;
}

@end
