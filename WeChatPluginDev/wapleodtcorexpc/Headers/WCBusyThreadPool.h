//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCBusyThreadPool : NSObject
{
    NSMutableArray *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *store; // @synthesize store=_store;
- (void)mergeFrameArray:(id)arg1 and:(id)arg2;
- (void)mergeFrame:(id)arg1 and:(id)arg2;
- (void)addFrame:(id)arg1 to:(id)arg2;
- (id)makeFrame:(id)arg1;
- (id)makeCallTree;
- (void)addCallStack:(id)arg1;
- (id)init;

@end

