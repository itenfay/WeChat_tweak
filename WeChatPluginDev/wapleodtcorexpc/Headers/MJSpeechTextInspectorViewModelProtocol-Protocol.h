//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJSpeechManager, MJVoiceItem, NSIndexPath, NSString;

@protocol MJSpeechTextInspectorViewModelProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType updateSelectionHandler;
@property(readonly, nonatomic) NSString *selectedRoleID;
@property(readonly, nonatomic) MJSpeechManager *speechManager;
- (NSIndexPath *)indexPathForItemWithRoleID:(NSString *)arg1;
- (MJVoiceItem *)itemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)handleSelectItemAtIndexPath:(NSIndexPath *)arg1 autoPlay:(_Bool)arg2 forceRequest:(_Bool)arg3;
- (void)loadItemsWithCompletion:(void (^)(_Bool))arg1;

@optional
@property(copy, nonatomic) CDUnknownBlockType deleteVoiceCloneRoleHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType beginVoiceCloneHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType applyAllDidFinishHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType applyAllWillBeginHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@end

