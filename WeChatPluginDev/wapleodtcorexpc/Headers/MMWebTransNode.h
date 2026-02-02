//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebTransNode : NSObject
{
    _Bool _isNodeInFirstScreen;
    _Bool _isTitle;
    NSString *_hashCode;
    NSString *_orgText;
    NSString *_transText;
    NSString *_brand;
    NSString *_styleList;
    NSString *_parentid;
    NSString *_grandparentid;
    NSString *_tagname;
    NSString *_greatGrandParentId;
    NSString *_grandTagname;
    NSString *_greatGrandTagname;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTitle; // @synthesize isTitle=_isTitle;
@property(nonatomic) _Bool isNodeInFirstScreen; // @synthesize isNodeInFirstScreen=_isNodeInFirstScreen;
@property(copy, nonatomic) NSString *greatGrandTagname; // @synthesize greatGrandTagname=_greatGrandTagname;
@property(copy, nonatomic) NSString *grandTagname; // @synthesize grandTagname=_grandTagname;
@property(copy, nonatomic) NSString *greatGrandParentId; // @synthesize greatGrandParentId=_greatGrandParentId;
@property(copy, nonatomic) NSString *tagname; // @synthesize tagname=_tagname;
@property(copy, nonatomic) NSString *grandparentid; // @synthesize grandparentid=_grandparentid;
@property(copy, nonatomic) NSString *parentid; // @synthesize parentid=_parentid;
@property(copy, nonatomic) NSString *styleList; // @synthesize styleList=_styleList;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *transText; // @synthesize transText=_transText;
@property(copy, nonatomic) NSString *orgText; // @synthesize orgText=_orgText;
@property(copy, nonatomic) NSString *hashCode; // @synthesize hashCode=_hashCode;

@end

