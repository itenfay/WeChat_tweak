//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface WCDBErrorTraceConfig : NSObject
{
    _Bool _showTableUsage;
    int _errorCode;
    NSSet *_dbTag;
    NSString *_messageMatchReg;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showTableUsage; // @synthesize showTableUsage=_showTableUsage;
@property(retain, nonatomic) NSString *messageMatchReg; // @synthesize messageMatchReg=_messageMatchReg;
@property(retain, nonatomic) NSSet *dbTag; // @synthesize dbTag=_dbTag;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;

@end

