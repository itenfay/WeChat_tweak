//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLivePromoteManageReportData : NSObject
{
    int _advertisementType;
    NSString *_businessId;
    long long _actionType;
}

+ (id)getPromoteManageReportDataWithPromoteItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;

@end

