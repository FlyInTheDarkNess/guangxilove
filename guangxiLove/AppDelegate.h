//
//  AppDelegate.h
//  guangxiLove
//
//  Created by 赵中良 on 2018/3/7.
//  Copyright © 2018年 赵中良. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

FOUNDATION_EXTERN NSString *const FKLoginStateChangedNotificationKey;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

