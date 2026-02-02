//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSDictionary, NSString;

@interface WAJSApiBanInfoToast
{
    NSDictionary *m_jsApiNameMap;
    MMUILabel *m_noticeLabel;
    NSString *_jsapiName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jsapiName; // @synthesize jsapiName=_jsapiName;
- (void)layoutSubviews;
- (void)initJsApiNameMap;
- (void)initToastView;
- (id)init;

@end

