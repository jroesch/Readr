//
//  RAppDelegate.h
//  Readr
//
//  Created by Jared Roesch on 8/23/12.
//  Copyright (c) 2012 Jared Roesch. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "INAppStoreWindow.h"

@interface RAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet INAppStoreWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
