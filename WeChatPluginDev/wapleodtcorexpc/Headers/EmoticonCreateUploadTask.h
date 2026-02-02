//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomManageAddLogic;
@protocol EmoticonCreateUploadTaskDelegate;

@interface EmoticonCreateUploadTask
{
    id <EmoticonCreateUploadTaskDelegate> _delegate;
    CDUnknownBlockType _appendInfoBlock;
    CDUnknownBlockType _uploadFailBlock;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(copy, nonatomic) CDUnknownBlockType uploadFailBlock; // @synthesize uploadFailBlock=_uploadFailBlock;
@property(copy, nonatomic) CDUnknownBlockType appendInfoBlock; // @synthesize appendInfoBlock=_appendInfoBlock;
@property(nonatomic) __weak id <EmoticonCreateUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getAddEmoticonSourceFrom:(unsigned long long)arg1;
- (int)getUploadSceneFrom:(unsigned long long)arg1;
- (void)realDoAddImg:(id)arg1;
- (void)handleAddingItem:(id)arg1;
- (void)startUpload;

@end

