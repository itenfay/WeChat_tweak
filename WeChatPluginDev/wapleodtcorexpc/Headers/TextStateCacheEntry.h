//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TextStateCacheEntry : NSObject
{
    NSString *_username;
    NSMutableArray *_privateTextStateList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateTextStateList; // @synthesize privateTextStateList=_privateTextStateList;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)mostRecentTextState;
- (id)textStateList;
- (long long)indexOfTextStateForId:(id)arg1;
- (void)removeTextStateForId:(id)arg1;
- (void)addTextState:(id)arg1;
- (void)addTextState:(id)arg1 checkExist:(_Bool)arg2;
- (id)initWithUsername:(id)arg1;

@end

