//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAThemeUtilProxy : NSObject
{
}

+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
+ (id)parseFontFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (_Bool)parseBOOLFromValues:(id)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (struct CGRect)parseRectFromValues:(id)arg1;
+ (struct CGSize)parseSizeFromValues:(id)arg1;
+ (struct CGPoint)parsePointFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (id)parseColorFromValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

