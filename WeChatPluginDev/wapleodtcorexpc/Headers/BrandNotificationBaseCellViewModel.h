//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface BrandNotificationBaseCellViewModel : NSObject
{
    _Bool _hasBottomLine;
    CMessageWrap *_messageWrap;
    double _viewWidth;
}

+ (id)createModelWithMsgWrap:(id)arg1 viewWidth:(double)arg2;
+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) _Bool hasBottomLine; // @synthesize hasBottomLine=_hasBottomLine;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (double)timeLabelTopMargin;
- (double)messageLabelTopMargin;
- (double)contentTopMargin;
- (double)detailContentLeftMargin;
- (double)contentLeftMargin;
- (double)viewHeight;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (id)cellViewClassName;

@end

