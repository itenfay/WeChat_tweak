//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPPlayerEventPublisher;

@interface TPContext : NSObject
{
    TPPlayerEventPublisher *_publisher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
- (id)init;

@end

