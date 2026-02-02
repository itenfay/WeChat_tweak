//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageForwardAndEditLogicController, NSString, UIImageView;

@interface MMImageActionEditItem
{
    EditImageForwardAndEditLogicController *_logicController;
    CDUnknownBlockType _onShowEditView;
    CDUnknownBlockType _onHideEditView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType onHideEditView; // @synthesize onHideEditView=_onHideEditView;
@property(copy, nonatomic) CDUnknownBlockType onShowEditView; // @synthesize onShowEditView=_onShowEditView;
@property(retain, nonatomic) EditImageForwardAndEditLogicController *logicController; // @synthesize logicController=_logicController;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)handleWithImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

