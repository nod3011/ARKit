//
//  NSManagedObjectContext+ARKit.h
//  ARKit
//
//  Created by Adam Rothman on 2/10/13.
//
//  Saving a context is just way too complicated.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (ARKit)

- (void)saveWithSuccess:(void(^)())block;

@end
