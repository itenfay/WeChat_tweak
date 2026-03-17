//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightDraft;

@protocol WCSightDraftProcessTaskExt <NSObject>

@optional
- (void)sightDraftProcessTask:(id)arg1 didFailToProcessSightDraft:(SightDraft *)arg2;
- (void)sightDraftProcessTask:(id)arg1 didFinishProcessingSightDraft:(SightDraft *)arg2;
@end

