//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAPrivacyUsageRecordData;

@interface WAPrivacyUsageRecordCellDataModel : NSObject
{
    WAPrivacyUsageRecordData *_recordData;
}

+ (id)createByPrivacyUsageRecordData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAPrivacyUsageRecordData *recordData; // @synthesize recordData=_recordData;

@end

