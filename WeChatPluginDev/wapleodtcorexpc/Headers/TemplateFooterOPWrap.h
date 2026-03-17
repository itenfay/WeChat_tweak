//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TemplateFooterOPWrap : NSObject
{
    unsigned int _opType;
    unsigned int _minClientVersion;
}

@property(nonatomic) unsigned int minClientVersion; // @synthesize minClientVersion=_minClientVersion;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;

@end

