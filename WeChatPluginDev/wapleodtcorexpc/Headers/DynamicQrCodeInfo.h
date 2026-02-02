//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DynamicQrCodeInfo
{
    _Bool _isDynamic;
    _Bool _canRefresh;
    NSString *_refreshWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *refreshWording; // @synthesize refreshWording=_refreshWording;
@property(nonatomic) _Bool canRefresh; // @synthesize canRefresh=_canRefresh;
@property(nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;

@end

