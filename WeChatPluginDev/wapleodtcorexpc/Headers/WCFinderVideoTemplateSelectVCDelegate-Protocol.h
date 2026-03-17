//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, MMShortVideoParamModel, NSString, SightDraft, UIImage;

@protocol WCFinderVideoTemplateSelectVCDelegate <NSObject>
- (void)finderTemplateSelectVCDidFinishCameraTemplateTakenWithPath:(NSString *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void)finderTemplateSelectVCDidPickSightDraft:(SightDraft *)arg1;
@end

