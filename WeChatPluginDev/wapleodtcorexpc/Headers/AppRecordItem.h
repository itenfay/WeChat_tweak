//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AppRecordItem : NSObject
{
}

+ (id)GetRecordDataDir:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)GetMiddleDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordDataTempPathByPath:(id)arg1;
+ (id)GetRecordThumbPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)RecordItemToXML:(id)arg1 innerType:(unsigned int)arg2;
+ (id)genRecordTitleByDataList:(id)arg1 forShort:(_Bool)arg2;
+ (id)genRecordTitleByDataList:(id)arg1;
+ (_Bool)ParserRecordXML:(id)arg1 TORecordItem:(id)arg2 msg:(id)arg3;

@end

