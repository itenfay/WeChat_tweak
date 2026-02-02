//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol ChatroomProfileViewLayoutDelegate <NSObject>

@optional
- (void)openContactInfo:(CContact *)arg1;
- (double)profileViewCellLeftMargin;
- (double)profileViewNameFontSize;
- (double)profileViewRowHeight;
- (double)profileViewHeadInnerMargin;
- (double)profileViewLeftRightMargin;
- (double)profileViewHeadLength;
@end

