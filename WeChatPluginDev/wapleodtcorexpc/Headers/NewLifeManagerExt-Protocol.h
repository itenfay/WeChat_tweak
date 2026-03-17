//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NewLifeMentionActionCallback, NewLifeSelectLinkCallback, NewLifeSelectMusicInfo, NewLifeUserEntryRule, PrefetchStreamCallbackCmdIdReq;

@protocol NewLifeManagerExt <NSObject>

@optional
- (void)onSelectLinkCallbackToFlutter:(NewLifeSelectLinkCallback *)arg1;
- (void)onGetCreatorCenterInfoCallbackToFlutter:(NewLifeUserEntryRule *)arg1;
- (void)onSetEnvelopeUrlCallbackToFlutter:(NSString *)arg1;
- (void)onSelectMusicCallbackToFlutter:(NewLifeSelectMusicInfo *)arg1;
- (void)onSendNewLifeStreamNotifyEventToFlutter;
- (void)onNewLifeMainSwtichValueChanged;
- (void)onMentionActionCallbackToFlutter:(NewLifeMentionActionCallback *)arg1;
- (void)onSendSwitchTabEventToFlutter:(_Bool)arg1;
- (void)onSendFlowDataToFlutter:(PrefetchStreamCallbackCmdIdReq *)arg1;
@end

