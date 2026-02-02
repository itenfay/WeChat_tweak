//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderInteractionThankCGIParams : NSObject
{
    int _thankScene;
    long long _interactionType;
    unsigned long long _mentionID;
    NSString *_feedTid;
}

- (void).cxx_destruct;
@property(nonatomic) int thankScene; // @synthesize thankScene=_thankScene;
@property(copy, nonatomic) NSString *feedTid; // @synthesize feedTid=_feedTid;
@property(nonatomic) unsigned long long mentionID; // @synthesize mentionID=_mentionID;
@property(nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;

@end

