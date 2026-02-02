//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMViewReportStruct : NSObject
{
    _Bool _checkViewExposure;
    _Bool _checkBtnNoResponse;
    _Bool _checkColor;
    int _bgColor;
    NSString *_viewId;
    long long _event;
    NSString *_customKey;
}

+ (id)ViewReportStructWithViewId:(id)arg1 checkViewExposure:(_Bool)arg2 checkBtnNoResponse:(_Bool)arg3 checkColor:(_Bool)arg4 bgColor:(int)arg5 event:(long long)arg6 customKey:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *customKey; // @synthesize customKey=_customKey;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) int bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) _Bool checkColor; // @synthesize checkColor=_checkColor;
@property(readonly, nonatomic) _Bool checkBtnNoResponse; // @synthesize checkBtnNoResponse=_checkBtnNoResponse;
@property(readonly, nonatomic) _Bool checkViewExposure; // @synthesize checkViewExposure=_checkViewExposure;
@property(readonly, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (id)description;
- (id)initWithViewId:(id)arg1 checkViewExposure:(_Bool)arg2 checkBtnNoResponse:(_Bool)arg3 checkColor:(_Bool)arg4 bgColor:(int)arg5 event:(long long)arg6 customKey:(id)arg7;

@end

