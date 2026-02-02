//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedMediaWrap, WCPlayerPlayArgs;

@interface MMWebFinderPlayArgs : NSObject
{
    NSString *_requestData;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCPlayerPlayArgs *_playerInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(copy, nonatomic) NSString *requestData; // @synthesize requestData=_requestData;

@end

