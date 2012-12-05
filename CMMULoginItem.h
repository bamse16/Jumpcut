//
//  CMMULoginItem.h
//  Jumpcut
//
//  Created by Marius Ursache on 12/5/12.
//
//

#import <Foundation/Foundation.h>

@interface CMMULoginItem : NSObject

+ (BOOL) willStartAtLogin:(NSURL *)itemURL;
+ (void) setStartAtLogin:(NSURL *)itemURL enabled:(BOOL)enabled;

@end
