#pragma once
#include "Overlay/LPIcon.h"

class LPIconLinux:
  public LPIcon
{
public:
  LPIconLinux(void);
  virtual ~LPIconLinux(void);

private:
  bool    m_visible;
  LPPoint m_position;

public:
  void SetPosition(const LPPoint& position) override;
  void SetVisibility(bool isVisible) override;
  bool Update(void) override;
  LPPoint GetPosition() const override;
  bool GetVisibility(void) const override;
};

