//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EditImageLogicController : NSObject
{
    NSMutableDictionary *__editedImageDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_editedImageDic; // @synthesize _editedImageDic=__editedImageDic;
- (void)dealloc;
- (id)getEditedString:(id)arg1;
- (_Bool)clearSavedFiles;
- (void)modifyEditedImageWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4 withEditedWidgetStateList:(id)arg5;
- (id)getEditOriginalImageDataWithUrl:(id)arg1;
- (id)getEditImageAttrWithUrl:(id)arg1;
- (id)init;

@end

