//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveContentVM, WCFinderLiveNoticCardParams;

@interface WCFinderLiveCardParams : NSObject
{
    MMFinderLiveContentVM *_livingContentVM;
    WCFinderLiveNoticCardParams *_noticeParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveNoticCardParams *noticeParams; // @synthesize noticeParams=_noticeParams;
@property(retain, nonatomic) MMFinderLiveContentVM *livingContentVM; // @synthesize livingContentVM=_livingContentVM;
- (id)initWithLivingContentVM:(id)arg1 noticeParams:(id)arg2;

@end

