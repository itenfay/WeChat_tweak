//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PBCoderPropertyType : NSObject
{
    _Bool _m_isSuperPlaceHolder;
    _Bool _m_isContainerUnpacked;
    unsigned int _m_index;
    int _m_cType;
    int _m_subCType;
    Class _m_cls;
    Class _m_subCls;
    id _m_blockGet;
    id _m_blockSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isContainerUnpacked; // @synthesize m_isContainerUnpacked=_m_isContainerUnpacked;
@property(nonatomic) _Bool m_isSuperPlaceHolder; // @synthesize m_isSuperPlaceHolder=_m_isSuperPlaceHolder;
@property(retain, nonatomic) id m_blockSet; // @synthesize m_blockSet=_m_blockSet;
@property(retain, nonatomic) id m_blockGet; // @synthesize m_blockGet=_m_blockGet;
@property(readonly, nonatomic) int m_subCType; // @synthesize m_subCType=_m_subCType;
@property(readonly, nonatomic) Class m_subCls; // @synthesize m_subCls=_m_subCls;
@property(readonly, nonatomic) Class m_cls; // @synthesize m_cls=_m_cls;
@property(readonly, nonatomic) int m_cType; // @synthesize m_cType=_m_cType;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
- (id)initWithCType:(int)arg1 index:(unsigned int)arg2 blockGet:(id)arg3 blockSet:(id)arg4;
- (id)initWithClass:(Class)arg1 subCType:(int)arg2 unpacked:(_Bool)arg3 index:(unsigned int)arg4 blockGet:(id)arg5 blockSet:(id)arg6;
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 unpacked:(_Bool)arg3 index:(unsigned int)arg4 blockGet:(id)arg5 blockSet:(id)arg6;

@end

