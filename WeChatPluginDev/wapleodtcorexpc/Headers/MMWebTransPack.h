//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMWebTransPack : NSObject
{
    _Bool _isPackInFirstScreen;
    NSMutableArray *_nodeList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPackInFirstScreen; // @synthesize isPackInFirstScreen=_isPackInFirstScreen;
@property(retain, nonatomic) NSMutableArray *nodeList; // @synthesize nodeList=_nodeList;
- (id)initWithNodeList:(id)arg1;

@end

