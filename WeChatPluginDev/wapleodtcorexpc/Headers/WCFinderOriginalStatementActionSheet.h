//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCFinderOriginalStatementActionSheetDelegate;

@interface WCFinderOriginalStatementActionSheet
{
    int _commentScene;
    id <WCFinderOriginalStatementActionSheetDelegate> _finderDelegate;
}

+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 rightButtonMsg:(id)arg3 clickRightButtonBlock:(CDUnknownBlockType)arg4 leftButtonMsg:(id)arg5 clickLeftButtonBlock:(CDUnknownBlockType)arg6 bindReportViewBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderOriginalStatementActionSheetDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)bindReportFromView:(id)arg1 viewId:(id)arg2 reportPolicy:(unsigned long long)arg3;
- (void)onClickCancelBtn;
- (double)appendBottomView:(id)arg1 bottomLine:(double)arg2;

@end

