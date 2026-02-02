//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveShopContext, MMFinderLiveShopShelfHintInfo;

@interface MMFinderLiveShopContext_HintModel : NSObject
{
    MMFinderLiveShopShelfHintInfo *_nextHint;
    MMFinderLiveShopContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveShopContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MMFinderLiveShopShelfHintInfo *nextHint; // @synthesize nextHint=_nextHint;
- (void)willShowHint:(id)arg1;
- (void)updateWithShopShelfInfo:(id)arg1;
- (id)history;
- (id)initWithContext:(id)arg1;

@end

