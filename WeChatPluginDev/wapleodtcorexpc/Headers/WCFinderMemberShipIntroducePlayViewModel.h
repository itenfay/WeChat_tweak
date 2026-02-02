//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderMemberShipIntroducePlayViewModel : NSObject
{
    int _feedType;
    NSMutableArray *_contentVMs;
}

- (void).cxx_destruct;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSMutableArray *contentVMs; // @synthesize contentVMs=_contentVMs;
- (int)feedViewControllerScene;
- (void)deleteContentVM:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (unsigned long long)allDataCount;
- (id)genNewContentVMs:(id)arg1 feedType:(int)arg2 headerData:(id)arg3;
- (id)initWithContentVMs:(id)arg1 feedType:(int)arg2 headerData:(id)arg3;

@end

