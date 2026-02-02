//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol EmoticonCustomCreateVideoEditTaskDelegate;

@interface EmoticonCustomCreateVideoEditTask
{
    id <EmoticonCustomCreateVideoEditTaskDelegate> _delegate;
    CDUnknownBlockType _editCancelBlock;
    CDUnknownBlockType _startComposingBlock;
    CDUnknownBlockType _composingFailBlock;
    CDUnknownBlockType _composingSucBlock;
    unsigned long long _editorType;
    NSString *_videoPath;
    NSString *_thumbImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbImgUrl; // @synthesize thumbImgUrl=_thumbImgUrl;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) unsigned long long editorType; // @synthesize editorType=_editorType;
@property(copy, nonatomic) CDUnknownBlockType composingSucBlock; // @synthesize composingSucBlock=_composingSucBlock;
@property(copy, nonatomic) CDUnknownBlockType composingFailBlock; // @synthesize composingFailBlock=_composingFailBlock;
@property(copy, nonatomic) CDUnknownBlockType startComposingBlock; // @synthesize startComposingBlock=_startComposingBlock;
@property(copy, nonatomic) CDUnknownBlockType editCancelBlock; // @synthesize editCancelBlock=_editCancelBlock;
@property(nonatomic) __weak id <EmoticonCustomCreateVideoEditTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (id)getVideoEditorWith:(id)arg1 videoPath:(id)arg2 thumbUrl:(id)arg3 videoSize:(struct CGSize)arg4;
- (id)editorUIConfigWithSize:(struct CGSize)arg1;
- (id)getVideoEditorWithThumbImgUrl:(id)arg1;
- (id)getVideoEditorWithPath:(id)arg1;
- (void)startEdit;
- (id)initWithThumbImgUrl:(id)arg1;
- (id)initWithVideoPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

