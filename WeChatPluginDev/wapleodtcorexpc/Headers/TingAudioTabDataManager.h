//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface TingAudioTabDataManager
{
    _Bool _hasShowAudioTab;
    MemoryMappedKV *_mmkv;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(nonatomic) _Bool hasShowAudioTab; // @synthesize hasShowAudioTab=_hasShowAudioTab;
- (void)jumpToAudioTabAndTopWithScene:(int)arg1;
- (void)deleteFromListenLater:(id)arg1 scene:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addToListenLaterWithItem:(id)arg1 inCategory:(id)arg2 scene:(int)arg3 curPlayPos:(double)arg4 fillContextBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addToListenLaterWithItem:(id)arg1 inCategory:(id)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setShouldShowAudioTabReDot:(_Bool)arg1;
- (_Bool)shouldShowAudioTabReDot;
- (void)setHasShownListenLaterEducation:(_Bool)arg1;
- (_Bool)hasShownListenLaterEducation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

