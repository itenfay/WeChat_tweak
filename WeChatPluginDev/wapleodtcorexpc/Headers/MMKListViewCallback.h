//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKListViewCallback : NSObject
{
    struct Handle<std::shared_ptr<kinda::KListViewCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fillData:(int)arg1 contentView:(id)arg2;
- (int)getViewTypeCount;
- (int)getViewType:(int)arg1;
- (int)getCount;
- (id)initWithCpp:(const void *)arg1;

@end

