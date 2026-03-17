//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCOutFeedbackCgi : NSObject
{
    unsigned int _eventID;
}

@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendrequest:(int)arg1 star:(int)arg2 FbCount:(int)arg3 Fblist:(id)arg4;
- (void)dealloc;

@end

