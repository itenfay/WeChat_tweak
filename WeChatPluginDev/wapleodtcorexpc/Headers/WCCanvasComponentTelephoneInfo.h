//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCCanvasComponentTelephoneInfo : NSObject
{
    NSArray *_phoneNumList;
    double _topLineSize;
    double _bottomLineSize;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) double topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) NSArray *phoneNumList; // @synthesize phoneNumList=_phoneNumList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

