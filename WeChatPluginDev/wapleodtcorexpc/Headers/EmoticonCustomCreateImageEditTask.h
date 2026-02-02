//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;
@protocol EmoticonCustomCreateImageEditTaskDelegate;

@interface EmoticonCustomCreateImageEditTask
{
    id <EmoticonCustomCreateImageEditTaskDelegate> _delegate;
    CDUnknownBlockType _editSucBlock;
    CDUnknownBlockType _editCancelBlock;
    NSString *_filePath;
    NSData *_imgData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType editCancelBlock; // @synthesize editCancelBlock=_editCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType editSucBlock; // @synthesize editSucBlock=_editSucBlock;
@property(nonatomic) __weak id <EmoticonCustomCreateImageEditTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)openImageEditorWithData:(id)arg1;
- (void)openImageEditorWithFilePath:(id)arg1;
- (void)startEdit;
- (id)initWithImageData:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

