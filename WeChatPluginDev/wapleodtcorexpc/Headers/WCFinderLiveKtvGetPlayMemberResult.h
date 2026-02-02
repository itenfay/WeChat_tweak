//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WCFinderLiveKtvGetPlayMemberResult : NSObject
{
    unsigned int _continueFlag;
    NSMutableArray *_onlineUserStateItems;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *onlineUserStateItems; // @synthesize onlineUserStateItems=_onlineUserStateItems;

@end

