//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WXKBWeSearchMessageAction
{
    NSDictionary *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dataItem; // @synthesize dataItem=_dataItem;
- (void)report;
- (_Bool)openBrandProfileWithMessage:(id)arg1 chatContact:(id)arg2;
- (_Bool)openWithMessage:(id)arg1;
- (id)brandProfileMessage;
- (id)finderProfileMessage;
- (id)message;
- (void)privatePerform;
- (id)initWithDictionary:(id)arg1;

@end

