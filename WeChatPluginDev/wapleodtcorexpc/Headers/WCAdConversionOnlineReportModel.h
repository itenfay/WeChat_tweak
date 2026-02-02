//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCAdConversionOnlineReportModel : NSObject
{
    int _ct;
    int _os;
    int _sdkSt;
    NSString *_pkg;
    NSString *_av;
    NSString *_jsBundleVersion;
    NSMutableArray *_events;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *jsBundleVersion; // @synthesize jsBundleVersion=_jsBundleVersion;
@property(retain, nonatomic) NSString *av; // @synthesize av=_av;
@property(nonatomic) int sdkSt; // @synthesize sdkSt=_sdkSt;
@property(nonatomic) int os; // @synthesize os=_os;
@property(nonatomic) int ct; // @synthesize ct=_ct;
@property(retain, nonatomic) NSString *pkg; // @synthesize pkg=_pkg;
- (id)init;

@end

