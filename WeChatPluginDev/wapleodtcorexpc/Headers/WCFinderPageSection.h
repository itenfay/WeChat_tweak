//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface WCFinderPageSection : NSObject
{
    _Bool _continueFlag;
    NSData *_lastBuffer;
    NSArray *_dataItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;

@end

