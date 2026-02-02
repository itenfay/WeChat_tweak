//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWidgetBaseItem
{
    unsigned int _widgetType;
    NSString *_requestKey;
}

+ (id)itemWithAppId:(id)arg1 version:(long long)arg2 state:(unsigned long long)arg3 widgetType:(unsigned int)arg4 requestKey:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(nonatomic) unsigned int widgetType; // @synthesize widgetType=_widgetType;
- (void)makeSafeString;

@end

