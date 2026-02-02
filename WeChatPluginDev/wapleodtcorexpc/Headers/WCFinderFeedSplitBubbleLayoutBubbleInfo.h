//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedSplitBubbleLayoutBubbleInfo : NSObject
{
    NSString *_bubbleWording;
    unsigned long long _bubbleShowTs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bubbleShowTs; // @synthesize bubbleShowTs=_bubbleShowTs;
@property(copy, nonatomic) NSString *bubbleWording; // @synthesize bubbleWording=_bubbleWording;
- (id)initWithBubbleInfo:(id)arg1;

@end

