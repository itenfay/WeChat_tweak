//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMLiveReportFieldTable : NSObject
{
    NSMutableDictionary *_fieldDict;
    Class _reportHandlerClass;
}

+ (void)addFieldWidthTable:(id)arg1 withClass:(Class)arg2 forFieldName:(id)arg3 forFieldIndex:(unsigned int)arg4;
- (void).cxx_destruct;
@property(nonatomic) Class reportHandlerClass; // @synthesize reportHandlerClass=_reportHandlerClass;
@property(retain, nonatomic) NSMutableDictionary *fieldDict; // @synthesize fieldDict=_fieldDict;
- (id)serializeAsLogString:(id)arg1;
- (id)fieldsSortByIndex;
- (id)init;

@end

