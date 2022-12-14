//
//  AppDelegate.h
//  Etrans
//
//  Created by juis on 2018. 2. 13..
//  Copyright © 2018년 juis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
//#if FB_SONARKIT_ENABLED
#import <Firebase.h>
//#endif
#import <FirebaseCore/FIRApp.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;

@end

