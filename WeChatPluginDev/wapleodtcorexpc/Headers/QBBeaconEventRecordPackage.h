//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QBBeaconEventRecordPackage : NSObject
{
    NSArray *list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getDataToBuffer;
- (void)addPkgElements:(id)arg1;
- (id)getPkgElements;
- (id)createWUPModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

