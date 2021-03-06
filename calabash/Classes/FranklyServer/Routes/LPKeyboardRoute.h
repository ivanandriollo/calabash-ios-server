//
//  LPKeyboardRoute.h
//  calabash
//
//  Created by Karl Krukow on 29/01/12.
//  Copyright (c) 2012 Xamarin. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "LPRoute.h"
#import "LPHTTPResponse.h"
#import "LPGenericAsyncRoute.h"
@interface LPKeyboardRoute : LPGenericAsyncRoute
{    
    BOOL _playbackDone;
    NSArray *_events;
}
@end
